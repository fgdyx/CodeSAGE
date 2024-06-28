#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 goto VAR8;
VAR8:
 free(VAR3);
}
static void FUN3()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = (struct VAR2 *)FUN4(100*sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 goto VAR8;
VAR8:
 ;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
