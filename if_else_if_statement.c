int main()
{
    int age; 
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have enterd %d as your age\n", age);
    if (age>=18)
    {
       printf("You can vote!");
    }
    else if (age>=10)
    {
       printf("You are between 10 to 18 so you can not vote!");
    }
    
    else{
        printf("You cannot vote!");
    }
    return 0;
}
