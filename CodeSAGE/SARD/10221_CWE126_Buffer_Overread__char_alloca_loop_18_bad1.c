#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 goto VAR5;
VAR5:
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 {
 size_t VAR6, VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR7 = strlen(VAR8);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR2[VAR6];
 }
 VAR8[100-1] = '';
 FUN3(VAR8);
 }
}
#endif
