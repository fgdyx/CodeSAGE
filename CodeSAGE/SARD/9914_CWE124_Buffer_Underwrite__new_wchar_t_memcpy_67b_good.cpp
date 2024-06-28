#ifndef VAR1
void FUN1(structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 memcpy(VAR3, VAR5, 100*sizeof(wchar_t));
 VAR3[100-1] = VAR6'';
 FUN2(VAR3);
 }
}
#endif
