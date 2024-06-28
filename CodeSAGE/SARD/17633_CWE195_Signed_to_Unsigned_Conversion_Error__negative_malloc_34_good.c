#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 100-1;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if (VAR2 < 100)
 {
 char * VAR6 = (char *)malloc(VAR2);
 memset(VAR6, '', VAR2-1);
 VAR6[VAR2-1] = '';
 FUN2(VAR6);
 free(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
