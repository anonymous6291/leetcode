import java.util.PriorityQueue;

class Solution {

    private class CR {

        double p;
        double t;

        CR(double p, double t) {
            this.p = p;
            this.t = t;
        }

        CR incr() {
            p += 1;
            t += 1;
            return this;
        }

        double getR() {
            return p / t;
        }

        double getIR() {
            return (p + 1) / (t + 1) - getR();
        }
    }

    private int signum(double a, double b) {
        if (a > b) {
            return 1;
        }
        if (a < b) {
            return -1;
        }
        return 0;
    }

    public double maxAverageRatio(int[][] c, int es) {
        PriorityQueue<CR> p = new PriorityQueue<>(
                (a, b) -> signum(b.getIR(), a.getIR()));
        for (int i[] : c) {
            p.offer(new CR(i[0], i[1]));
        }
        while (--es >= 0) {
            p.offer(p.poll().incr());
        }
        double total = 0;
        for (CR cc : p) {
            total += cc.getR();
        }
        return total / c.length;
    }
}
