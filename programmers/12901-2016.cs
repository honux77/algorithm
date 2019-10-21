using System;

public class Solution {
    public string solution(int m, int d) {
        string[] wdays = new string[] {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        DateTime d1 = Convert.ToDateTime("1/1/2016");
        DateTime d2 = Convert.ToDateTime($"{m}/{d}/2016");
        int days = (int) (d2 - d1).TotalDays;
        return wdays[(days + 5) % 7];
    }
}
