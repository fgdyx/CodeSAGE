#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 }
 while(1)
 {
 free(VAR3);
 break;
 }
}
static void FUN3()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (struct VAR2 *)FUN4(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
