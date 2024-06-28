#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 100-1;
 break;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 100-1;
 break;
 default:
 FUN2("");
 break;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
