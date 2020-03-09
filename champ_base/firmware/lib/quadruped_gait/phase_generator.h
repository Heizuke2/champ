#ifndef _PHASE_GENERATOR_H_
#define _PHASE_GENERATOR_H_

#define SECONDS_TO_MICROS 1000000

class PhaseGenerator
{
        unsigned long int last_touchdown_;

        float leg_clocks_[4];

        bool has_swung_;

        float stance_duration_;

    public:
        PhaseGenerator(float stance_duration);
        
        bool has_started;

        float stance_phase_signal[4];
        float swing_phase_signal[4];
        
        void run(float target_velocity, float step_length);
};

#endif