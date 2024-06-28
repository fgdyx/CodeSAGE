#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 }
 if(5==5)
 {
 free(VAR3);
 }
}
static void FUN5()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR3 = (struct VAR2 *)FUN6(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 }
 if(5==5)
 {
 ;
 }
}
static void FUN7()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = (struct VAR2 *)FUN6(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 }
 if(5==5)
 {
 ;
 }
}
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
