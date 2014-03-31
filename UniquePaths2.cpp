class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        if(obstacleGrid[0][0]==1) return 0;
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int> > arr(m, vector<int>(n, 0));
    
    arr[0][0]=1;
    for(int i=1;i<m;i++){
        if(obstacleGrid[i][0]!=1) arr[i][0]=arr[i-1][0];
    }
    
    for(int i=1;i<n;i++){
        if(obstacleGrid[0][i]!=1) arr[0][i]=arr[0][i-1];
    }
    
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(obstacleGrid[i][j]!=1){
                 arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
            
        }
    }
    
    return arr[m-1][n-1];
    }
};
