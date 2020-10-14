template <typename T>
void auswap(T &aref, T &bref)
{
    T t = std::move(aref);
    aref = std::move(bref);
    bref = std::move(t);
}