#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    printf ("Nhap so n: \n");
    scanf ("%d", &n);
    if (n<6)
    {
        printf ("Nhap lai. n phai lon hon 6.\n");
        
    }
    else
    {
        while (6 <= i <= n-1 )
        {
            if ((i%6) == 0) 
            { 
                if ((i == ((n/6)*6)))
                {
                    printf("So lon nhat nho hon %d va chia het cho ca 2 va 3 la: %d", n, i);
                    return 0;
                   
                }
                else
                {
                    i++;
                }    
            }
            else
            {
            	i++;
			}
		}
	}
}







		
	
