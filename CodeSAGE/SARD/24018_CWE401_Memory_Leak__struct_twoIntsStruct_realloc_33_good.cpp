#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 struct VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN2(100*sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 {
 struct VAR2 * VAR3 = VAR4;
 ;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 struct VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)realloc(VAR3, 100*sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 {
 struct VAR2 * VAR3 = VAR4;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
