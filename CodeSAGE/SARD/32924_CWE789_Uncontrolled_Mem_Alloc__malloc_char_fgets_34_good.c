#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_unionType VAR3;
 VAR2 = 0;
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN4(VAR8, NULL, 0);
 }
 else
 {
 FUN2("");
 }
 }
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7) && VAR2 < 100)
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
