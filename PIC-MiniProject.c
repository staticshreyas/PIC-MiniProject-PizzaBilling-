#include<stdio.h>
int Pizza();
int Appetizers();
int Bevarages_Desserts();
int Bill();
 static char order[100][100];
 static int cost[100];
 static int k=0;



void main()
{

  printf("\t\t\t  *****************WELCOME TO  JOEY'S PIZZA*****************\t\t\n");
  printf("\t\t\t  __________________________________________________________\n");
  printf("\t\t\t\t     Contact: 022 28762222  022 28743333\n");
  printf("\t\t\t\t  Address: hop 1, Plot D, Samruddhi Complex,\n \t\t\t     Chincholi Bunder Road, Mindspace, Malad West, Mumbai\n");
  printf("\t\t\t  __________________________________________________________\n");
  int choice=0;int flag=1;
  while(flag==1)
  {
  printf("\t\t\t  Enter your choice:\n\t\t\t  1.Pizza\n\t\t\t  2.Appetizers\n\t\t\t  3.Bevarages&Desserts\n\t\t\t  4.Bill\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    {
      flag=0;
      Pizza();
      break;
    }
    case 2:
    {
      flag=0;
      Appetizers();
      break;
    }
    case 3:
    {
      flag=0;
      Bevarages_Desserts();
      break;
    }
    case 4:
    {
      flag=0;
      Bill();
      break;
    }
    default:
    {
      printf("\n\t\t\t  Enter correct choice\n");
      flag=1;
    }
  }
  if(flag==0)
  {
    break;
  }
  else
  {
    continue;
  }
}
}
int Pizza()
{
  char pizzas[10][100]={"Garden Fresh\t\t\tRs.340","Chef's Favourite\t\tRs.370","Mexican Bonanza\t\t\tRs.370",
"Paneer Makhani\t\t\tRs.450","Vegetarian Feast\t\tRs.585",
"Chicken Tikka\t\t\tRs.470","Joeys's Special\t\t\tRs.625",
"Italian Special\t\t\tRs.470","Tornado\t\t\t\tRs.575","Chicken Feast\t\t\tRs.650"};
int pizzacost[10]={340,370,370,450,585,470,625,470,575,650};
printf("Veg Pizzas:\n\n");
  for(int i=0;i<10;i++)
  {
    if(i==5)
    {printf("\nNon Veg Pizzas\n\n");}
    printf("%d.\t\t\t%s\n",i+1,pizzas[i]);
  }
  int a=0;int i=0;int ch=0;
  while(i==0)
  {
  printf("Enter the pizza you want\n");
  scanf("%d",&a);
  for(int j=0;j<100;j++)
  {
  order[k][j]=pizzas[a-1][j];
  }
  cost[k]=pizzacost[a-1];
  k++;
  printf("Do you want one more pizza?(1/0)\n");
  scanf("%d",&ch);
  if(ch==1)
  {
    continue;
  }
  else if(ch==0)
  {
    break;
  }
  }
  int choice=0;int flag=1;
  while(flag==1)
  {
  printf("\t\t\t  Enter your choice:\n\t\t\t  1.Home\n\t\t\t  2.Appetizers\n\t\t\t  3.Bevarages&Desserts\n\t\t\t  4.Bill\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    {
      flag=0;
      main();
      break;
    }
    case 2:
    {
      flag=0;
      Appetizers();
      break;
    }
    case 3:
    {
      flag=0;
      Bevarages_Desserts();
      break;
    }
    case 4:
    {
      flag=0;
      Bill();
      break;
    }
    default:
    {
      printf("\n\t\t\t  Enter correct choice\n");
      flag=1;
    }
  }
  if(flag==0)
  {
    break;
  }
  else
  {
    continue;
  }
}
}







int Appetizers()
{
  char appetizers[10][100]={"Garlic Bread\t\t\tRs.75","Cheese Garlic Bread\t\tRs.110","Super Cheese Garlic Bread-Veg\tRs.120",
"Super Cheese Garlic Bread-NonVegRs.160","Cheese Sticks \t\t\tRs.110",
"Garden Fresh\t\t\tRs.170","Tuna\t\t\t\tRs.250",
"Roasted Chicken\t\t\tRs.230","Chciken Crust Sandwich\t\tRs.190","Paneer Cheese Sandwich\t\tRs.160"};
int appetizerscost[10]={75,110,120,160,110,170,250,230,190,160};
printf("Appetizers:\n\n");
  for(int i=0;i<10;i++)
  {
    printf("%d.\t\t\t%s\n",i+1,appetizers[i]);
  }
  int a=0;int i=0;int ch=0;
  while(i==0)
  {
  printf("Enter the appetizer you want\n");
  scanf("%d",&a);
  for(int j=0;j<100;j++)
  {
  order[k][j]=appetizers[a-1][j];
  }
  cost[k]=appetizerscost[a-1];
  k++;
  printf("Do you want one more appetizers?(1/0)\n");
  scanf("%d",&ch);
  if(ch==1)
  {
    continue;
  }
  else if(ch==0)
  {
    break;
  }
  }
  int choice=0;int flag=1;
  while(flag==1)
  {
  printf("\t\t\t  Enter your choice:\n\t\t\t  1.Home\n\t\t\t  2.Pizza\n\t\t\t  3.Bevarages&Desserts\n\t\t\t  4.Bill\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    {
      flag=0;
      main();
      break;
    }
    case 2:
    {
      flag=0;
      Pizza();
      break;
    }
    case 3:
    {
      flag=0;
      Bevarages_Desserts();
      break;
    }
    case 4:
    {
      flag=0;
      Bill();
      break;
    }
    default:
    {
      printf("\n\t\t\t  Enter correct choice\n");
      flag=1;
    }
  }
  if(flag==0)
  {
    break;
  }
  else
  {
    continue;
  }
}

}




int Bevarages_Desserts()
{
  char Bevarages_Desserts[10][100]={"Coke\t\t\t\tRs.75","7 UP\t\t\t\tRs.75","Sprite\t\t\t\tRs.75",
"Fanta\t\t\t\tRs.75","Thumbs UP \t\t\tRs.75",
"Choco Lava Cake\t\t\tRs.170","Sizzling Brownie\t\tRs.250",
"Hot Chocolate\t\t\tRs.230","Chocolate Mousse\t\tRs.190","Caramel Custard\t\t\tRs.160"};
int Bevarages_Dessertscost[10]={75,75,75,75,75,170,250,230,190,160};
printf("Appetizers:\n\n");
  for(int i=0;i<10;i++)
  {
    printf("%d.\t\t\t%s\n",i+1,Bevarages_Desserts[i]);
  }
  int a=0;int i=0;int ch=0;
  while(i==0)
  {
  printf("Enter the Bevarage or Dessert you want\n");
  scanf("%d",&a);
  for(int j=0;j<100;j++)
  {
  order[k][j]=Bevarages_Desserts[a-1][j];
  }
  cost[k]=Bevarages_Dessertscost[a-1];
  k++;
  printf("Do you want one more Bevarages or Desserts?(1/0)\n");
  scanf("%d",&ch);
  if(ch==1)
  {
    continue;
  }
  else if(ch==0)
  {
    break;
  }
  }
  int choice=0;int flag=1;
  while(flag==1)
  {
  printf("\t\t\t  Enter your choice:\n\t\t\t  1.Home\n\t\t\t  2.Pizza\n\t\t\t  3.Appetizers\n\t\t\t  4.Bill\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    {
      flag=0;
      main();
      break;
    }
    case 2:
    {
      flag=0;
      Pizza();
      break;
    }
    case 3:
    {
      flag=0;
      Appetizers();
      break;
    }
    case 4:
    {
      flag=0;
      Bill();
      break;
    }
    default:
    {
      printf("\n\t\t\t  Enter correct choice\n");
      flag=1;
    }
  }
  if(flag==0)
  {
    break;
  }
  else
  {
    continue;
  }
}
}




int Bill()
{
  int total=0;
  for(int i=0;i<k;i++)
  {
    total=total+cost[i];
  }
  float CGST=total*0.25;
  float SGST=total*0.25;
  float total2=total+CGST+SGST;
  printf("\t\t\t   *****************JOEY'S PIZZA PVT.LTD.*****************\t\t\n");
  printf("\t\t\t   __________________________________________________________\n");
  printf("\t\t\t\t     Contact: 022 28762222  022 28743333\n");
  printf("\t\t\t\t  Address: Shop 1, Plot D, Samruddhi Complex,\n \t\t\t     Chincholi Bunder Road, Mindspace, Malad West, Mumbai\n");
  printf("\t\t\t\t\t Site:www.joeyspizza.com\n");
  printf("\t\t\t     ______________________________________________________\n");
  printf("\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
  printf("\t\t\t Sr.\t\t\t   Items\t\t\t  Price\n");
  printf("\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
  for(int i=0;i<k;i++)
  {
  printf("\t\t\t %d.\t\t\t%s\n",i+1,order[i]);
  }
  printf("\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
  printf("\t\t\t Sub Total=Rs.%d\n",total);
  printf("\t\t\t CGST=Rs.%f\n",CGST);
  printf("\t\t\t SGST=Rs.%f\n",SGST);
  printf("\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
  printf("\t\t\t Grand Total=Rs.%f\n",total2);
  printf("\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
}
