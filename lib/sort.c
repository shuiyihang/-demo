/*快速排序*/
void QuickSort(int S[],int start,int end)
{
    if(start<end)
    {
        int StandNum=S[start];
        int i=start,j=end;
        while(i<j)
        {
            while((i<j)&&StandNum<=S[j])
            {
                j--;
            }
            if(i<j)
            {
                S[i++]=S[j];
            }

            while((i<j)&&StandNum>S[i])
            {
                i++;
            }
            if(i<j)
            {
                S[j--]=S[i];
            }
        }
        S[i]=StandNum;
        QuickSort(S,start,i-1);
        QuickSort(S,i+1,end);
    }
}

