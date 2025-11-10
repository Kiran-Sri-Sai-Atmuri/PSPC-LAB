/*   print the topper among the n students  */

#include <stdio.h>
#include <string.h>

struct student {
    int regid;
    char name[100];
    float cgpa;
    char village[100];
    char district[100];
    char phnumber[10];
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
    for(int i=1;i<n;i++){
        if(s[i].cgpa>s[topper].cgpa){
            topper=i;
        }
    }
    printf("THE TOPPER IS s[%d] STUDENT:\n",topper);
    printf("TOPPER DETAILS\n");
        printf("s[%d] students regid is:%d\n",topper,s[topper].regid);
        printf("s[%d] students name is:%s\n",topper,s[topper].name);
        printf("s[%d] students cgpa is:%f\n",topper,s[topper].cgpa);
        printf("s[%d] students add-village is:%s\n",topper,s[topper].village);
        printf("s[%d] students add-district is:%s\n",topper,s[topper].district);
        printf("s[%d] students phone number:%s\n",topper,s[topper].phnumber);

    return 0;
}