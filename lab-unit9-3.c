/*    print the list of Phone Number for the students who are above 
average of CGPA.*/

#include <stdio.h>
#include <string.h>

struct student {
    int regid;
    char name[100];
    float cgpa;
    char village[100];
    char district[100];
    char phnumber[15];
};

int main() {
    int n,topper=0;
    printf("ENTER NO. OF STUDENTS: ");
    scanf("%d", &n);
    getchar(); 

    struct student s[n];

    for(int i = 0; i < n; i++) {
        printf("\n--- Enter details of student %d ---\n", i + 1);

        printf("Enter regid: ");
        scanf("%d", &s[i].regid);
        getchar();

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
        getchar();

        printf("Enter village: ");
        fgets(s[i].village, sizeof(s[i].village), stdin);
        s[i].village[strcspn(s[i].village, "\n")] = '\0';

        printf("Enter district: ");
        fgets(s[i].district, sizeof(s[i].district), stdin);
        s[i].district[strcspn(s[i].district, "\n")] = '\0';

        printf("Enter phone number: ");
        fgets(s[i].phnumber, sizeof(s[i].phnumber), stdin);
        s[i].phnumber[strcspn(s[i].phnumber, "\n")] = '\0';
    }
    int sum=0;
    float avg;
    for(int i=0;i<n;i++){
        sum+=s[i].cgpa;
    }
    avg=sum/n;
    printf("\nSTUDENTS PHNUMBERS WHOSE CGPA IS ABOVE AVEGRA OF CGPA:\n");
    for(int i=0;i<n;i++){
        if(s[i].cgpa>avg){
            printf("%s:",s[i].name); 
            printf("%s\n",s[i].phnumber);
        }
    }

}
