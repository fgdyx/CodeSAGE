#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 break;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 switch(6)
 {
 case 6:
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
