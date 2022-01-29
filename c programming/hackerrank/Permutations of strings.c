#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    for(int i=1;i<n;i++)
    {
        if((strcmp(s[n-i-1],s[n-i]))<0)
        {
            char **arr;
            arr=calloc(i+1,sizeof(char*));
            for(int j=n-i-1,k=0;j<n;j++,k++)
            {
                arr[k]=s[j];
            }
            for(int l,checker;;)
            {
                for(l=0,checker=0;l<i;l++)
                {
                    char* temp=NULL;
                    if(strcmp(arr[l],arr[l+1])>0)
                    {
                    temp=arr[l];
                    arr[l]=arr[l+1];
                    arr[l+1]=temp;
                    }
                    else
                    checker++;
                }
                if(checker==i-1)
                    break;
            }
            char* temp_2=arr[1];
            int t;
            for(int t=0;t<n;t++)
            {
                if(temp_2==s[t])
                    break;
            }
            s[t]=s[n-i-1];
            s[n-i-1]=temp_2;
            for(int l,checker;;)
            {
                for(l=n-i,checker=0;l<n-1;l++)
                {
                    char* temp=NULL;
                    if(strcmp(s[l],s[l+1])>0)
                    {
                    temp=s[l];
                    s[l]=s[l+1];
                    s[l+1]=temp;
                    }
                    else
                    checker++;
                }
                if(checker==i-1)
                    break;
            }
            return 1;
        }
    }
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
