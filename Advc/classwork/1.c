// Sort contacts based on the choosen criteria
//      int cricteria
    printf("Sort based on :\t1.Name\t2.phone\t3.email\n");
    //scanf("%d",&criteria);
    
//     if 1 
//     sorted based on name
//     if 2
//     sorted based on phone
//     if 3
//     sorted on email
//     */
//     for(int i=0;i<addressBook->contactCount;i++)
//     {
//         printf("%s\t%s\t%s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
//     }
for(int i=0;i<addressBook->contactCount;i++)
{
    printf("%s\t%s\t%s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
}
    
    
 }
