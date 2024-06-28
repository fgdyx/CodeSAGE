#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_34_unionType VAR3;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 wchar_t VAR9[100];
 wmemset(VAR9, VAR6'', 100-1);
 VAR9[100-1] = VAR6'';
 wcscat(VAR2, VAR9);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
