#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR4;
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[50] = VAR5"";
 wcscat(VAR8, VAR2);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
