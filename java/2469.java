class Solution {
    public double[] convertTemperature(double c) {
        return new double[] { c + 273.15, (c * 1.8) + 32 };
    }
}
