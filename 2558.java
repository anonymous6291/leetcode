import java.util.PriorityQueue;
class Solution {
    public long pickGifts(int[] gifts, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
        for (int g : gifts)
            pq.offer(g);
        while (--k >= 0)
            pq.offer((int) Math.sqrt(pq.poll()));
        long res = 0;
        for (Object o : pq.toArray())
            res += (int) o;
        return res;
    }
}
