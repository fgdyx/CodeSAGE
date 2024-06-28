#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define VAR4 ""
#else
#define VAR4 ""
#endif
#define VAR5 ''
namespace VAR6
{
VAR7::FUN1(char * VAR8)
{
 VAR9 = VAR8;
 {
 size_t VAR10 = strlen(VAR9);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR4, "");
 if (VAR12 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR9+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN2("");
 VAR9[VAR10] = '';
 }
 fclose(VAR12);
 }
 }
 }
}
VAR7::~FUN1()
{
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR9 != ''; VAR9++)
 {
 if (*VAR9 == VAR5)
 {
 FUN2("");
 break;
 }
 }
 free(VAR9);
}
}
#endif
