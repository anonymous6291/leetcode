class Solution {
    public int minOperations(int[] nums, long k) {
        PriorityQueue<Long> pq = new PriorityQueue<>();
        for (long i : nums)
            pq.offer(i);
        int c = 0;
        while (true) {
            long i = pq.poll();
            if (i >= k)
                return c;
            pq.offer(i * 2 + pq.poll());
            c++;
        }
    }
}
