class Solution {
    public List<String> cellsInRange(String s) {
        char ls = s.charAt(3), vs = s.charAt(4);
        List<String> l = new ArrayList<>();
        for (char i = s.charAt(0); i <= ls; i++)
            for (char j = s.charAt(1); j <= vs; j++)
                l.add(new String(new char[] { i, j }));
        return l;
    }
}
