#ifndef NEURAL_FLUSHABLE_HXX
#define NEURAL_FLUSHABLE_HXX

namespace LazyCore
{
    class Resetable
    {
        public:
            virtual void Reset() = 0;
    };
}

#endif
