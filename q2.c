    #include <stdio.h>

    void main()

    {
        int i, j, a, n, k, number[30];


        scanf("%d", &n);
        for (i = 0; i < n; ++i)

            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)

            {

                if (number[i] > number[j]) 

                {
                    a =  number[i];

                    number[i] = number[j];

                    number[j] = a;
                }

            }

        }

            for ( i = 0; i < n; i ++){  
        for ( j = i + 1; j < n; j++)  
        {  
            if ( number[i] == number[j])  
            {  
                for ( k = j; k < n - 1; k++)  
                {  
                    number[k] = number [k + 1];  
                }  
                n--;  
                  
                j--;      
            }  
        }  
    }  


        for (i = 0; i < n; ++i)

            printf("%d ", number[i]);

 

    }