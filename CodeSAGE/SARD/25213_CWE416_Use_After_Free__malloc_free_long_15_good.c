#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 free(VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 ;
 break;
 }
}
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 free(VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(VAR2[0]);
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN5(VAR2[0]);
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
