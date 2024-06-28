#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5) const
{
 if (VAR5 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR6 = (char *)malloc(VAR5);
 memset(VAR6, '', VAR5-1);
 VAR6[VAR5-1] = '';
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
