#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 VAR6* VAR7 = new VAR8;
 VAR7->FUN3(VAR2);
 delete VAR7;
}
void FUN4()
{
 FUN1();
}
#endif
