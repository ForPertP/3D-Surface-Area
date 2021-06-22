int surfaceArea(vector<vector<int>> A)
{
    int sum = 0;
    
    for (int i = 0; i < A.size(); ++i)
    {
        for (int j = 0; j < A[0].size(); ++j)
        {
            sum += A[i][j] * 4 + 2;
            
            if (j+1 < A[0].size())
                sum -= 2 * min(A[i][j], A[i][j+1]);
            
            if (i+1 < A.size())
                sum -= 2 * min(A[i][j], A[i+1][j]);
        }
    }
    
    return sum;
}    
