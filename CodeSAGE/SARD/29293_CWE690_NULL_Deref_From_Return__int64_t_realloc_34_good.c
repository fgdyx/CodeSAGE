#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE690_NULL_Deref_From_Return__int64_t_realloc_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
