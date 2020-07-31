// 연습문제 나누어 떨어지는 숫자 배열 Level 1

using System.Collections;
public class Solution
{
    public int[] solution(int[] arr, int divisor)
    {
        ArrayList answer = new ArrayList();
        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] % divisor == 0) { answer.Add(arr[i]); }
        }
        if (answer.Count == 0) { answer.Add(-1); }
        else { answer.Sort(); }
        return (int[])answer.ToArray(typeof(int));
    }
}
