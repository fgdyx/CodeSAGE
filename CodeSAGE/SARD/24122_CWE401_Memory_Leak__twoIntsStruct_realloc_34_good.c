#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3(&VAR3[0]);
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 ;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3(&VAR3[0]);
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
