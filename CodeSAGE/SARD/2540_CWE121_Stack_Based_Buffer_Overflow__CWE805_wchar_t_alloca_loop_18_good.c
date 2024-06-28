#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 goto VAR5;
VAR5:
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 {
 size_t VAR7;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR5[VAR7];
 }
 VAR2[100-1] = VAR6'';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
