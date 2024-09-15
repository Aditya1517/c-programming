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
    else{
        printf("You cannot vote!");
    }
    return 0;
}
