class Solution {
    class Node {
        long total;
        Stack<Node> c;

        Node(int v) {
            total = v;
            c = new Stack<>();
        }

        void ac(Node child) {
            c.push(child);
        }

        void ct() {
            for (Node n : c) {
                n.ct();
                total += n.total;
            }
        }
    }

    public int maxKDivisibleComponents(int n, int[][] e, int[] v, int k) {
        if (n == 1)
            return 1;
        Node nodes[] = new Node[n];
        for (int i[] : e) {
            if (nodes[i[0]] == null)
                nodes[i[0]] = new Node(v[i[0]]);
            if (nodes[i[1]] == null)
                nodes[i[1]] = new Node(v[i[1]]);
            nodes[i[0]].ac(nodes[i[1]]);
            nodes[i[1]].ac(nodes[i[0]]);
        }
        simplify(nodes[0]);
        nodes[0].ct();
        return split(nodes[0], k);
    }

    private void simplify(Node n) {
        for (Node t : n.c) {
            t.c.remove(n);
            simplify(t);
        }
    }

    private int split(Node p, int k) {
        int total = 1;
        for (Node n : p.c) {
            if (n.total % k != 0)
                total -= 1;
            total += split(n, k);
        }
        return total;
    }
}
