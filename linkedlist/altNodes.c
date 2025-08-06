#include <stdio.h>
#include <stdlib.h>
struct node1 {
        int a;
        int b;
        struct node2 *link1;
};
struct node2 {
        char c;
        float d;
        struct node1 *link2;
};
int main() {
    int n;
    printf("Enter number of nodes in linked list : ");
    scanf("%d", &n);

    // creating a linked list
    struct node1 *head = NULL;
    struct node1 *new1 = NULL;
    struct node2 *new2 = NULL;
    int count = 1;
    while (count <= n) {
        if (count == 1) {
            head = malloc(sizeof(struct node1));
            new1 = head;
            printf("Enter a :");
            scanf("%d", &head->a);
            printf("Enter b :");
            scanf("%d", &head->b);
            new1->link1 = NULL;
            count++;
        } else if (count % 2 == 0) {
            new2 = malloc(sizeof(struct node2));
            new1->link1 = new2;
            printf("Enter c :");
            scanf(" %c", &new2->c);
            printf("Enter d :");
            scanf("%f", &new2->d);
            new2->link2 = NULL;
            count++;
        } else {
            new1 = malloc(sizeof(struct node1));
            new2->link2 = new1;
            printf("Enter a :");
            scanf("%d", &new1->a);
            printf("Enter b :");
            scanf("%d", &new1->b);
            new1->link1 = NULL;
            count++;
        }
    }
    // printing the linked list
    int countp = 1;
    struct node1 *p1 = NULL;
    struct node2 *p2 = NULL;
    while (countp <= n) {
        if (countp % 2 != 0) {
            p1 = head;
            printf("Data of node #%d is : %d %d\n", countp, p1->a, p1->b);
            p1 = p1->link1->link2;
            countp++;
        } else {
            p2 = head->link1;
            printf("Data of node #%d is : %c %.2f\n", countp, p2->c, p2->d);
            countp++;
        }
    }
    return 0;
}
