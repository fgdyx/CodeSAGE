#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 struct VAR2 * *VAR4 = &VAR3;
 struct VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 struct VAR2 * VAR3 = *VAR4;
 VAR3 = (struct VAR2 *)FUN2(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN3((VAR8 *)&VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 struct VAR2 * VAR3 = *VAR5;
 ;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 struct VAR2 * *VAR4 = &VAR3;
 struct VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 struct VAR2 * VAR3 = *VAR4;
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN3((VAR8 *)&VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 struct VAR2 * VAR3 = *VAR5;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
