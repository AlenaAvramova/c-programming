/*In Eli's school there are 1 ≤ N ≤ 100,000 people.
Some of them know each other, and Eli knows there are 1 ≤ M ≤ 1,000,000 such friendships.
She wants to write a program that quickly answers who are the friends of a given person.
People are represented by integers. Given a person's number, output how many friends they have and who they are.
Friendship is bidirectional (if 1 is friends with 3, then 3 is friends with 1)*/

#include <stdio.h>
#include <stdlib.h>

#define MAXN 100001

typedef struct Node {
    int person;
    struct Node* next;
} Node;

Node* adj[MAXN];

void addFriendship(int a, int b) {

    Node* newA = (Node*)malloc(sizeof(Node));
    newA->person = b;
    newA->next = adj[a];
    adj[a] = newA;

    Node* newB = (Node*)malloc(sizeof(Node));
    newB->person = a;
    newB->next = adj[b];
    adj[b] = newB;
}

void queryFriends(int person) {
    Node* cur = adj[person];
    int count = 0;

    Node* tmp = cur;
    while (tmp) { count++; tmp = tmp->next; }

    printf("Person %d has %d friend(s): ", person, count);
    while (cur) {
        printf("%d ", cur->person);
        cur = cur->next;
    }
    printf("\n");
}

void freeMemory(int n) {
    for (int i = 1; i <= n; i++) {
        Node* cur = adj[i];
        while (cur) {
            Node* tmp = cur;
            cur = cur->next;
            free(tmp);
        }
        adj[i] = NULL;
    }
}

int main() {
    int n, m;

    printf("Enter N (number of people): ");
    scanf("%d", &n);
    printf("Enter M (number of friendships): ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
        adj[i] = NULL;

    printf("Enter %d friendships (a b):\n", m);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        addFriendship(a, b);
    }

    int q;
    printf("\nEnter number of queries: ");
    scanf("%d", &q);

    printf("Enter person numbers to query:\n");
    for (int i = 0; i < q; i++) {
        int person;
        scanf("%d", &person);
        queryFriends(person);
    }

    freeMemory(n);
    return 0;
}
