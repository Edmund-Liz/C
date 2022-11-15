#include <stdio.h> 
char * longestCommonPrefix(char ** strs, int strsSize){
    int z=0;
    while(strs[z++])
    ;
    char returnchar[16]={};
    for(int i=0;z--;i++)
    {
        int t=0;
        char temp=strs[0][i];
        for(int j=1;strs[j][i];j++)
        {
            if(strs[j][i]!=temp)
            {
                t++;
                break;
            }
        }
        if(t)
        break;
        returnchar[i]==temp;
    }
    return returnchar;
}
int main()
{
	char** strs;
	for(int i=0;1;i++)
	{
		printf("输入第%d个字符串:",i+1);
		scanf("%s",&strs[i]);
		int t=0;
		printf("是否继续输入？[是-1/否-0]");
		scanf("%d",&t);
		if(t==0)
		break; 
	}
	printf("%s",longestCommonPrefix(strs,1));
}
