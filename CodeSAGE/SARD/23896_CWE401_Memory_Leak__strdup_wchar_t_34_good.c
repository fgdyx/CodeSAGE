#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE401_Memory_Leak__strdup_wchar_t_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 CWE401_Memory_Leak__strdup_wchar_t_34_unionType VAR3;
 VAR2 = NULL;
 {
 wchar_t VAR7[] = VAR4"";
 VAR2 = FUN5(VAR7);
 FUN3(VAR2);
 }
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 free(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
