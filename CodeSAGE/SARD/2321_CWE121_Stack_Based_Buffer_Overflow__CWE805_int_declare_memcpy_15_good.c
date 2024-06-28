#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = VAR4;
 break;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
static void FUN4()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
