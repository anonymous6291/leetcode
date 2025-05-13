class Solution {
    public int countMatches(List<List<String>> i, String k, String v) {
        int p = switch (k.charAt(0)) {
            case 't' -> 0;
            case 'c' -> 1;
            default -> 2;
        };
        int c = 0, n = i.size();
        for (int j = 0; j < n; j++)
            if (i.get(j).get(p).equals(v))
                c++;
        return c;
    }
}
