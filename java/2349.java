class NumberContainers {

    private Map<Integer, Queue<Integer>> nums;
    private Map<Integer, Integer> ind;

    public NumberContainers() {
        nums = new HashMap<>();
        ind = new HashMap<>();
    }

    public void change(int i, int n) {
        ind.put(i, n);
        nums.computeIfAbsent(n, k -> new PriorityQueue<>()).offer(i);
    }

    public int find(int n) {
        Queue<Integer> q = nums.get(n);
        if (q == null)
            return -1;
        while (!q.isEmpty()) {
            int i = q.peek();
            if (ind.get(i) == n)
                return i;
            q.poll();
        }
        return -1;
    }
}

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers obj = new NumberContainers();
 * obj.change(index,number);
 * int param_2 = obj.find(number);
 */
