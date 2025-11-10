//   d print the students in the ascending order of Regn ID. 

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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i].regid>s[j].regid){
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                
            }
        }
    }
        printf("\nSTUENDS AFTER SORTING BY THEIR REGID\n");
        for (int i = 0; i < n; i++){
            printf("\n-----STUDENT %d DETAILS-----\n",i+1);
        printf("s[%d] students regid is:%d\n",i,s[i].regid);
        printf("s[%d] students name is:%s\n",i,s[i].name);
        printf("s[%d] students cgpa is:%f\n",i,s[i].cgpa);
        printf("s[%d] students add-village is:%s\n",i,s[i].village);
        printf("s[%d] students add-district is:%s\n",i,s[i].district);
        printf("s[%d] students phone number:%s\n",i,s[i].phnumber);
        
    }
        
}
