 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
    int n = 0;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n , sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    printf("Enter the number of elements: ");
    scanf("%d", &n);
     
    

    ptr = (int*)realloc(ptr , n *sizeof(int));
    ptr = (int*)realloc(ptr , n *sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}