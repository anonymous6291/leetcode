class Solution {
    private int stoi(String s) {
        return s.charAt(0) * 1000 + s.charAt(1) * 100 + s.charAt(2) * 10 + s.charAt(3) - 53328;
    }

    public List<String> findHighAccessEmployees(List<List<String>> at) {
        Map<String, List<Integer>> map = new HashMap<>();
        for (List<String> l : at) {
            List<Integer> list = map.computeIfAbsent(l.get(0), a -> new ArrayList<>());
            list.add(stoi(l.get(1)));
        }
        List<String> hat = new ArrayList<>();
        for (String emp : map.keySet()) {
            int p1 = -2000, p2 = -2000;
            List<Integer> list = map.get(emp);
            list.sort(null);
            for (int i : list)
                if (i - p1 < 100) {
                    hat.add(emp);
                    break;
                } else {
                    p1 = p2;
                    p2 = i;
                }
        }
        return hat;
    }
}
