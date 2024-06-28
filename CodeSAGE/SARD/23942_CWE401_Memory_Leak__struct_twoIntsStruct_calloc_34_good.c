#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN2(100*sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 VAR4.VAR8 = VAR3;
 {
 struct VAR2 * VAR3 = VAR4.VAR9;
 ;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 VAR4.VAR8 = VAR3;
 {
 struct VAR2 * VAR3 = VAR4.VAR9;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
