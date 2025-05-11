class TweetCounts {
    Map<String, List<Integer>> m;

    public TweetCounts() {
        m = new HashMap<>();
    }

    public void recordTweet(String tn, int t) {
        m.compute(tn, (a, b) -> {
            if (b == null)
                b = new ArrayList<>();
            b.add(find(b, t), t);
            return b;
        });
    }

    public List<Integer> getTweetCountsPerFrequency(String f, String tn, int s, int e) {
        List<Integer> l = m.get(tn);
        List<Integer> r = new ArrayList<>();
        int p = find(l, s - 1);
        int j = (f.charAt(0) == 'm') ? 59 : (f.charAt(0) == 'h' ? 3599 : 86399);
        while (s <= e) {
            s = Math.min(s + j, e);
            int k = find(l, s);
            r.add(k - p);
            p = k;
            s++;
        }
        return r;
    }

    private int find(List<Integer> l, int v) {
        int s = 0, e = l.size() - 1;
        while (s <= e) {
            int m = (s + e) / 2;
            if (l.get(m) <= v) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        }
        return s;
    }
}

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts obj = new TweetCounts();
 * obj.recordTweet(tweetName,time);
 * List<Integer> param_2 = obj.getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */
